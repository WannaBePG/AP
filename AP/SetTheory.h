#pragma once
#include <set>

class SetTheory
{
private:
	/// <summary>�W��S</summary>
	std::set<int> m_sets{};

	void displaySet(bool isTrueSubset = false) const;
	static void displaySet(const std::set<int>& sets);
public:
	SetTheory(const std::set<int> sets) : m_sets{ sets } {}

	/// <summary>�ׂ��W����\������</summary>
	void displayPowerSet() const { displaySet(false); }

	/// <summary>�^�����W����\������</summary>
	void displayTrueSet() const { displaySet(true); }
};