#include "cp.h"

#define BUFFER_SIZE 1024

/**
 * cp - copies the content of a file to another file.
 * @file_from: source file name.
 * @file_to: destination file name.
 *
 * Return: 0 on success, or -1 on failure.
 */
int cp(const char *file_from, const char *file_to)
{
    int fd_from, fd_to;
    ssize_t n_read, n_write;
    char buffer[BUFFER_SIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return (-1);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(fd_from);
        return (-1);
    }

    while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        n_write = write(fd_to, buffer, n_read);
        if (n_write == -1 || n_write != n_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(fd_from);
            close(fd_to);
            return (-1);
        }
    }

    if (n_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(fd_from);
        close(fd_to);
        return (-1);
    }

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        close(fd_to);
        return (-1);
    }

    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        return (-1);
    }

    return (0);
}

