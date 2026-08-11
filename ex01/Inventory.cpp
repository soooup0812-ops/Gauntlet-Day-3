#include "Inventory.hpp"
#include <algorithm>
#include <iostream>
#include <utility>

Inventory::Inventory(const std::string& owner, std::initializer_list<std::string> items) : m_owner(owner),m_count(items.size()),m_items(new std::string[items.size()]){
    std::copy(items.begin(), items.end(), m_items);
    std::string item_str = "";
    if (m_count > 0) {
        item_str += " (";
        for (size_t i = 0; i < m_count; ++i) {
            item_str += m_items[i];
            if (i + 1 < m_count) item_str += ", ";
        }
        item_str += ")";
    }
    std::cout << "+ Inventory " << m_owner << item_str << "\n";
};

Inventory::~Inventory(){
    std::string item_str = "";
    if (m_count > 0) {
        item_str += " (";
        for (size_t i = 0; i < m_count; ++i) {
            item_str += m_items[i];
            if (i + 1 < m_count) item_str += ", ";
        }
        item_str += ")";
    }

    delete[] m_items;
    std::cout << "- Inventory " << m_owner << item_str << "\n";
}                                 

