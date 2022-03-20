class Solution {
public:
    string convert(int nums,string result)
    {
        if(nums==0)
            return result;
        
        else if(nums>=1000)
            return convert(nums-1000,result+'M');
        else if(nums>=900)
            return convert(nums-900,result+'C'+'M');
        else if(nums>=500)
            return convert(nums-500,result+'D');
        else if(nums>=400)
            return convert(nums-400,result+'C'+'D');
        else if(nums>=100)
            return convert(nums-100,result+'C');
        else if(nums>=90)
            return convert(nums-90,result+'X'+'C');
        else if(nums>=50)
            return convert(nums-50,result+'L');
        else if(nums>=40)
            return convert(nums-40,result+'X'+'L');
        else if(nums>=10)
            return convert(nums-10,result+'X');
        else if(nums>=9)
            return convert(nums-9,result+'I'+'X');
        else if(nums>=5)
            return convert(nums-5,result+'V');
        else if(nums>=4)
            return convert(nums-9,result+'I'+'V');
        else if(nums>=1)
            return convert(nums-1,result+'I');
        return result;
    }
    string intToRoman(int num) {
        string result="";
        result=convert(num,result);
        return result;
    }
};
