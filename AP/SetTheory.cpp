#include <iostream>

#include "SetTheory.h"

void SetTheory::displaySet(bool isTrueSubset/* = false*/) const
{
	auto num = m_sets.size();

	auto allStreet = 1 << num;
	if (isTrueSubset)
		--allStreet;
	for (int mask = 0; mask < allStreet; ++mask)
	{
		std::set<int> subSets{};
		int index = 0;
		for (auto itr = m_sets.cbegin(); itr != m_sets.cend(); ++itr)
		{
			if (mask & (1 << index))
				subSets.insert(*itr);
			++index;
		}
		displaySet(subSets);
	}
}

void SetTheory::displaySet(const std::set<int>& sets)
{
	std::cout << "{";
	for (auto itr = sets.cbegin(); itr != sets.cend(); ++itr)
	{
		std::cout << *itr;
		if (std::next(itr) != sets.cend())
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;
}