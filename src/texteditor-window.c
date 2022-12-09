/* texteditor-window.c
 *
 * Copyright 2022 Luan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "config.h"

#include "texteditor-window.h"

struct _TexteditorWindow
{
  AdwApplicationWindow parent_instance;

  /* Template widgets */
  GtkHeaderBar *header_bar;
  GtkLabel *main_text_view;
};

G_DEFINE_FINAL_TYPE(TexteditorWindow, texteditor_window, ADW_TYPE_APPLICATION_WINDOW)

static void texteditor_window_class_init(TexteditorWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS(klass);

  gtk_widget_class_set_template_from_resource(widget_class, "/dev/luancgs/TextEditor/texteditor-window.ui");
  gtk_widget_class_bind_template_child(widget_class, TexteditorWindow, header_bar);
  gtk_widget_class_bind_template_child(widget_class, TexteditorWindow, main_text_view);
}

static void texteditor_window_init(TexteditorWindow *self)
{
  gtk_widget_init_template(GTK_WIDGET(self));
}
