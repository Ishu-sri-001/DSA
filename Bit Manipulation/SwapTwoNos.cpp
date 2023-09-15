// https://www.codingninjas.com/studio/problems/swap-two-numbers_1380853?leftPanelTab=0

void swapNumber(int &a, int &b) {
	a=a^b;
	b=a^b;
	a=a^b;
}
