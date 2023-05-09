#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file.
 * @filename: A pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         1 if the function exist and -1 if the function does not exist.
 *         Otherwise - 1.
 */
 int append_text_to_file(const char *filename, char *text_content)
{
        int o, z, len = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (len = 0; text_content[len];)
                        len++;
        }

        o = open(filename, O_WRONLY | O_APPEND);
        z = write(o, text_content, len);

        if (o == -1 || z == -1)
                return (-1);

        close(o);

        return (1);
}
