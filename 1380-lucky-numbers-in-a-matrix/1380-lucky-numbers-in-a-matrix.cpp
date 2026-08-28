class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int minRowE = 0;

        vector<int> ans;

        for (int i = 0; i < matrix.size(); i++) {
            // hrr row mei hume reset krna h kyuki min number nikal rhe h.
            int rowE = INT_MAX;

            // col index iss liye ki hume pta rhega ki konse col mei row ka
            // element minimum h....means jiss row -> min element -> col -> max
            // number -> whi consider krna h
            int colIdx = 0;

            for (int j = 0; j < matrix[i].size(); j++) {
                // issey hum row ka minimum element nikal rhe hain.
                if (rowE > matrix[i][j]) {
                    rowE = matrix[i][j];
                    colIdx = j;
                }
            }
            // Check if row minimum is maximum in its column
            bool isLucky = true;

            // uss number ko column mei check krenge
            for (int k = 0; k < matrix.size(); k++) {
                if (matrix[k][colIdx] > rowE) {
                    rowE = matrix[k][colIdx];
                    isLucky = false;
                }
            }
            if(isLucky)
                ans.push_back(rowE);
        }

        return ans;
    }
};


/*
i
Kaunsi row par ho?
i → rows

j
Us row ke andar kaunsa column dekh rahe ho?
j → columns

k
Row minimum milne ke baad, uske column ko check karte waqt kaunsi row dekh rahe ho?
k → rows again
*/