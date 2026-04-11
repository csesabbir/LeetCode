class Solution {
public:
    bool canAliceWin(int n) {
    if (n >= 10) {
        int removeStone = 10;
        n -= removeStone;
        bool palyerMove = true;
        removeStone -= 1;
        while (n >= removeStone) {
            n -= removeStone;
            removeStone -= 1;
            palyerMove = !palyerMove;
        }
        return palyerMove;
    }
    return false;
}
};