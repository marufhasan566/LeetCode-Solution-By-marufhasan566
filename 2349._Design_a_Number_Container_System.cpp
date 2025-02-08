// https://leetcode.com/problems/design-a-number-container-system/description/?envType=daily-question&envId=2025-02-08
// Help from YT: https://www.youtube.com/watch?v=rHM8m4s7G44&ab_channel=Techdose
// Revise the problem for better understanding

class NumberContainers
{
    unordered_map<int, int> index_number;
    unordered_map<int, set<int>> number_indices;

public:
    NumberContainers() {}

    void change(int index, int number)
    {
        // If a number in the given index is already present then remove the
        // last number
        if (index_number.count(index))
        {
            number_indices[index_number[index]].erase(index);
            if (number_indices[index_number[index]].size() == 0)
                number_indices.erase(index_number[index]);
        }

        // Else insert new number at the given index
        index_number[index] = number;
        number_indices[number].insert(index);
    }

    int find(int number)
    {
        if (!number_indices.count(number))
            return -1;
        return *(number_indices[number].begin());
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */