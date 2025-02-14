// https://leetcode.com/problems/product-of-the-last-k-numbers/?envType=daily-question&envId=2025-02-14
// Google Interview Question
// Help from YT: https://www.youtube.com/watch?v=EVLxXU9vuAE&ab_channel=Fraz

class ProductOfNumbers
{
public:
    vector<int> v;
    ProductOfNumbers()
    {
        v.clear();
        v.push_back(1);
    }

    void add(int num)
    {
        if (num == 0)
        {
            v.clear();
            v.push_back(1);
        }
        else
            v.push_back(v.back() * num);
    }

    int getProduct(int k)
    {
        int sz = v.size();
        if (sz - 1 < k)
            return 0;
        else
        {
            int lastPreProduct = v.back();
            int PreProductBeforeLastKthNumber = v[sz - 1 - k];
            int ans = lastPreProduct / PreProductBeforeLastKthNumber;
            return ans;
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */