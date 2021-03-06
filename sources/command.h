/*##############################################################################

FUNNNELWEB COPYRIGHT
====================
FunnelWeb is a literate-programming macro preprocessor.

Copyright (C) 1992 Ross N. Williams.

   Ross N. Williams
   ross@spam.adelaide.edu.au
   16 Lerwick Avenue, Hazelwood Park 5066, Australia.

This program is free software; you can redistribute it and/or modify
it under the terms of Version 2 of the GNU General Public License as
published by the Free Software Foundation.

This program is distributed WITHOUT ANY WARRANTY; without even the implied
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See Version 2 of the GNU General Public License for more details.

You should have received a copy of Version 2 of the GNU General Public
License along with this program. If not, you can FTP the license from
prep.ai.mit.edu/pub/gnu/COPYING-2 or write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

Section 2a of the license requires that all changes to this file be
recorded prominently in this file. Please record all changes here.

Programmers:
   RNW  Ross N. Williams  ross@spam.adelaide.edu.au

Changes:
   07-May-1992  RNW  Program prepared for release under GNU GPL V2.

##############################################################################*/


/******************************************************************************/
/*                                   COMMAND.H                                */
/******************************************************************************/
/*                                                                            */
/* The command package is the mover and shaker of FunnelWeb. It exports a     */
/* single function, whose argument is the command line given to FunnelWeb     */
/* when it is invoked at the operating system level. The command package      */
/* routine examines the command line and executes it, possibly invoking a     */
/* mini-interpreter or calling the different component of FunnelWeb in turn   */
/* (e.g. the parser).                                                         */
/*                                                                            */
/******************************************************************************/

#include "style.h"
#include "machin.h"

/******************************************************************************/

void command P_((p_cl_t));
/* Executes the command line which is passed as the argument. */

/******************************************************************************/
/*                               End of COMMAND.H                             */
/******************************************************************************/
