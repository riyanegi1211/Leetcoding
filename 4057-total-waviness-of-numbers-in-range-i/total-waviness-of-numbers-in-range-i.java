class Solution {
    public int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i=num1;i<=num2;i++){
            ans+=calculateWaviness(i);
        }
        return ans;
    }

    public int calculateWaviness(int num){
        String s = Integer.toString(num);
        int waviness = 0;

        for(int i=1;i<s.length()-1;i++){
            boolean isWaviness= (s.charAt(i)>s.charAt(i-1) && s.charAt(i)>s.charAt(i+1))
             || (s.charAt(i)<s.charAt(i-1) && s.charAt(i)<s.charAt(i+1));
            if(isWaviness)
                waviness++;
        }
        return waviness;
    }
}