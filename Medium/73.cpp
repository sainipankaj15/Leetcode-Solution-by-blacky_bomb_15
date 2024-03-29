class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int columnzero = 1;

        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] == 0)
                columnzero = 0;
            for (int j = 1; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = matrix.size() - 1; i >= 0; i--)
        {
            for (int j = matrix[i].size() - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }

            if (columnzero == 0)
                matrix[i][0] = 0;
        }
    }
};