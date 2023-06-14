#include <iostream>
using namespace std;

class Color {
	int r, g, b;
public:
	Color(int r=0, int g=0, int b=0) {
		this->r = r; this->g = g; this->b = b;
	}

	Color operator + (Color c) {
		Color color;
		color.r = this->r + c.r;
		color.g = this->g + c.g;
		color.b = this->b + c.b;

		return color;
	}
	bool operator == (Color c) {
		if (this->r == c.r && this->g == c.g && this->b == c.b) return true;
		else return false;
	}

	void show() {
		cout << r << ' ' << g << ' ' << b << endl;
	}
};

int main() {
	Color red(255, 0, 0);
	Color blue(0, 0, 255);
	Color c;
	c = red + blue; // c = red.+(blue)
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia) cout << "보라색 맞음";
	else cout << "보라색 아님";
}