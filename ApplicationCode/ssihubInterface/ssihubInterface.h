/////////////////////////////////////////////////////////////////////////////////
//
//  Copyright (C) 2011-2012 Statoil ASA, Ceetron AS
// 
//  ResInsight is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
// 
//  ResInsight is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.
// 
//  See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html> 
//  for more details.
//
/////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <QString>
#include <QStringList>

namespace ssihub {

class Interface
{
public:
    Interface();

    void setWebServiceAdress(const QString& wsAdress);
    void setJsonDestinationFolder(const QString& folder);
    void setRegion(int east, int west, int north, int south);

    QStringList jsonWellPaths();

private:
    QString m_webServiceAdress;
    QString m_jsonDestinationFolder;

    int m_east;
    int m_west;
    int m_north;
    int m_south;

    QStringList m_importedWellPathFiles;
};

}
