/*******************************************************************************
 *
 This file is part of the LibreCAD project, a 2D CAD program

 Copyright (C) 2024 LibreCAD.org
 Copyright (C) 2024 sand1024

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 ******************************************************************************/

#ifndef LC_SHORTCUTSTREEVIEW_H
#define LC_SHORTCUTSTREEVIEW_H

#include <QTreeView>
#include "lc_shortcutstreemodel.h"

class LC_ShortcutsTreeView:public QTreeView{

public:
    LC_ShortcutsTreeView(QWidget *parent = nullptr);
    void setup(LC_ShortcutsTreeModel *treeModel);

    LC_ShortcutsTreeModel *getTreeModel() const;

    QStringList saveTreeExpansionState();

    void expandChildren(const QModelIndex &index);

    void applyExpandState(QStringList &expandedItems, QModelIndex startIndex);

    void restoreTreeExpansionState(QStringList treeExpansionState);
};

#endif // LC_SHORTCUTSTREEVIEW_H