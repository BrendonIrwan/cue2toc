
/* conf.h - configuration file parser interface
 * Copyright (C) 2004 Matthias Czapla <dermatsch@gmx.de>
 *
 * This file is part of cue2toc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */
#ifndef CONF_H
#define CONF_H

/* Write CD-Text to TOC file? */
extern int cdtext;

/* Shut up? */
extern int quiet;

/* Print debugging info? */
extern int debug;

/* Convert data files if a converter is configured? */
extern int convert;

/* Reads configuration file and sets the options above */
void config(void);

#endif /* CONF_H */
