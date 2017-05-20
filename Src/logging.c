/* logging.c, Version 0.9
 *
 * This copyright header adapted from the Linux 4.1 kernel.
 *
 * Copyright 2017 Nooshin Eghbal, Hamidreza Anvari, Paul Lu
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#include "logging.h"

static FILE *file;

void log_start(const char *path)
{
    file = fopen(path, "w");
}

void log_end()
{
    fclose(file);
}

void log_msg(const char *msg)
{
    fputs(msg, file);
    fflush(file);
}
