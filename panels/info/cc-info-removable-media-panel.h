/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2017 Mohammed Sadiq <sadiq@sadiqpk.org>
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
 */

#ifndef CC_INFO_REMOVABLE_MEDIA_PANEL_H
#define CC_INFO_REMOVABLE_MEDIA_PANEL_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define CC_TYPE_INFO_REMOVABLE_MEDIA_PANEL (cc_info_removable_media_panel_get_type ())
G_DECLARE_FINAL_TYPE (CcInfoRemovableMediaPanel, cc_info_removable_media_panel, CC, INFO_REMOVABLE_MEDIA_PANEL, CcPanel)


G_END_DECLS

#endif /* CC_INFO_REMOVABLE_MEDIA_PANEL_H */