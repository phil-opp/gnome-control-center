/* cc-input-list-box.c
 *
 * Copyright (C) 2010 Intel, Inc
 * Copyright (C) 2020 System76, Inc.
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
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Sergey Udaltsov   <svu@gnome.org>
 *         Ian Douglas Scott <idscott@system76.com>
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

G_BEGIN_DECLS

#include <gtk/gtk.h>

#define CC_TYPE_INPUT_LIST_BOX (cc_input_list_box_get_type ())
G_DECLARE_FINAL_TYPE (CcInputListBox, cc_input_list_box, CC, INPUT_LIST_BOX, GtkListBox)

void cc_input_list_box_set_login (CcInputListBox *self, gboolean);
void cc_input_list_box_set_login_auto_apply (CcInputListBox*, gboolean);
void cc_input_list_box_set_localed (CcInputListBox*, GDBusProxy*);
void cc_input_list_box_set_permission (CcInputListBox*, GPermission*);

G_END_DECLS
