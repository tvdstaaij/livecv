/****************************************************************************
**
** Copyright (C) 2014-2016 Dinu SV.
** (contact: mail@dinusv.com)
** This file is part of Live CV Application.
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
****************************************************************************/

#ifndef QMATNODE_HPP
#define QMATNODE_HPP

#include <QSGGeometryNode>
#include "qlcvglobal.h"
#include "qmatstate.h"

class Q_LCV_EXPORT QMatNode : public QSGGeometryNode{

public:
    QMatNode();

private:
    QSGGeometry m_geometry;

};

#endif // QMATNODE_HPP



