/*
 * This file is part of RaidFinder
 * Copyright (C) 2019-2020 by Admiral_Fish
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef SEEDSEARCHER12_HPP
#define SEEDSEARCHER12_HPP

#include <Core/Searcher/SeedSearcher.hpp>

class SeedSearcher12 : public SeedSearcher
{
public:
    SeedSearcher12(const QVector<Pokemon> &pokemon, const QVector<int> &ivCount, bool firstResult, bool ability);
    void startSearch(int minRolls, int maxRolls, int threads) override;

private:
    bool ability;
    QVector<u8> ivsRef;
    u8 fixedIndex;
    int rerolls;

    bool searchSeed(u64 &seed) override;
};

#endif // SEEDSEARCHER12_HPP
