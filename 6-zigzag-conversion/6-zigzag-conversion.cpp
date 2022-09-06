class Solution {
public:
    string convert(string s, int numRows) {
    vector<string> row(numRows);
    int direction = 0;
    int rowIndex = 0;
    string t;
        
    if (numRows == 1)
        return s;
        
    // Loop through the string. Un-imagine the original matrix without spaces.
    //
    // PAHN
    // APLSIIG
    // YIR
    //
    // Each row can be formed with a string, in this case 3 strings. When s[i] gets
    // gets to the lower boundary, switch directions and start moving up, rowIndex--
    // Conversely, when s[i] gets to the upper boundary, switch directions, and start
    // moving down, rowIndex++
        
    // The sum of all 3 strings will be the Zigzag conversion
    
        
    for (int i = 0; i < s.size(); i++)
    {
        row[rowIndex] = row[rowIndex] + s[i];
        
        if (direction == 0)
            rowIndex++;
        else
            rowIndex--;
        
        if (rowIndex == numRows - 1)
            direction = 1;
        
        if (rowIndex == 0)
            direction = 0;
    }
        
    for (int i = 0; i < numRows; i++)
        t = t + row[i];
        
    return t;    
    }
};