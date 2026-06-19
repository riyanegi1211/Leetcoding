class Solution {
    public int largestAltitude(int[] gain) {
        int currAltitude = 0;
        int highestAltitude = currAltitude;

        for(int altitudeGain:gain){
            currAltitude+=altitudeGain;
            highestAltitude = Math.max(highestAltitude,currAltitude);
        }
        return highestAltitude;
    }
}