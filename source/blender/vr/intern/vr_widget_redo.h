/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2018 by Blender Foundation.
 * All rights reserved.
 *
 * Contributor(s): MARUI-PlugIn
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file blender/vr/intern/vr_widget_redo.h
 *   \ingroup vr
 */

#ifndef __VR_WIDGET_REDO_H__
#define __VR_WIDGET_REDO_H__

#include "vr_widget.h"

/* Interaction widget for performing a 'redo' operation. */
class Widget_Redo : public VR_Widget {
 public:
  static Widget_Redo obj; /* Singleton implementation object. */
  virtual std::string name() override
  {
    return "REDO";
  }; /* Get the name of this widget. */
  virtual Type type() override
  {
    return TYPE_REDO;
  }; /* Type of Widget. */

  virtual bool has_click(
      VR_UI::Cursor &c) const override; /* Test whether this widget supports "clicking". */
  virtual void click(VR_UI::Cursor &c) override; /* Click with the index finger / trigger. */
  virtual bool has_drag(
      VR_UI::Cursor &c) const override; /* Test whether this widget supports "dragging". */

  virtual void render_icon(
      const Mat44f &t,
      VR_Side controller_side,
      bool active = false,
      bool touched = false) override; /* Render the icon/indication of the widget. */
};

#endif /* __VR_WIDGET_REDO_H__ */
