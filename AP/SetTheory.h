#pragma once
#include <set>

class SetTheory
{
private:
	/// <summary>集合S</summary>
	std::set<int> m_sets{};

	void displaySet(bool isTrueSubset = false) const;
	static void displaySet(const std::set<int>& sets);
public:
	SetTheory(const std::set<int> sets) : m_sets{ sets } {}

	/// <summary>べき集合を表示する</summary>
	void displayPowerSet() const { displaySet(false); }

	/// <summary>真部分集合を表示する</summary>
	void displayTrueSet() const { displaySet(true); }
};