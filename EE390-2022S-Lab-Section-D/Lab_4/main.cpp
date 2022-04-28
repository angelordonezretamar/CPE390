#include <cmath>
#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>

using namespace std;
// edit in this part, find your group and paste there
// test test
// group 1:
// question 1: --------------------------------------------------------

double rms(double array[], int len) {
  double numerator = 0;
  for (int i = 0; i < len; i++) {
    numerator = numerator + pow(array[i], 2);
  }
  double total = sqrt(numerator / len);
  return total;
}

// question 2: --------------------------------------------------------

// group 2:
// question 3: --------------------------------------------------------
void stats(const double a[], uint32_t len, double& mean, double& var,
           double& min, double& max) {
  double running_sum = 0;
  double running_var_numer = 0;
  double temp_max = a[0];
  double temp_min = a[0];

  for (int i = 0; i < len; i++) {
    running_sum += a[i];
  }
  mean = running_sum / len;

  // https://www.google.com/search?q=variance+formula&oq=variance+formula&aqs=chrome..69i57j0i131i433i512j0i512l8.4710j0j4&sourceid=chrome&ie=UTF-8
  for (int i = 0; i < len; i++) {
    running_var_numer += (a[i] - mean) * (a[i] - mean);
  }
  var = running_var_numer / (len - 1);

  for (int i = 0; i < len; i++) {
    if (a[i] > temp_max) {
      temp_max = a[i];
    }
    if (a[i] < temp_min) {
      temp_min = a[i];
    }
  }
  max = temp_max;
  min = temp_min;
}

// question 4: --------------------------------------------------------
void stats2(const double a[], uint32_t len, double& median, double& range) {
  if (len % 2 == 0) {
    median = (a[(len / 2) - 1] + a[(len / 2)]) / 2;
  else {
    int mid = 1 + (len - 1) / 2;
    median = a[mid - 1];
  }
  range = a[len - 1] - a[0];
}
// group 3:
// question 5: --------------------------------------------------------
double area(double x, double y, double r) { return M_PI * r * r; }

// question 6: --------------------------------------------------------
bool containsPoint(double xcenter, double ycenter, double radius, double x,
                   double y) {
  double distance =
      sqrt(((x - xcenter) * (x - xcenter)) + ((y - ycenter) * (y - ycenter)));
  if (distance > radius) {
    return false;
  } else {
    return true;
  }
}

// group 4:
// question 7: --------------------------------------------------------
  bool intersects(double x1, double y1, double h1, double w1, double x2,
                  double y2, double w2, double h2) {
    if (x2 > x1 || x2 < (x1 + w1)) {
      return true;
    } else if ((x2 + w2) > x1 || (x2 + w2) < (x1 + w1)) {
      return true;
    } else if (y2 > y1 || y2 < (y1 + h1)) {
      return true;
    } else if ((y2 + h2) > y1 || (y2 + h2) < (y1 + h1)) {
      return true;
    } else {
      return false;
    }
  }

// question 8: --------------------------------------------------------
bool lines_intersect(double x1, double y1, double x2, double y2, double x3,
                     double y3, double x4, double y4) {
  double m1 = (y2 - y1) / (x2 - x1);
  double m2 = (y4 - y3) / (x4 - x3);

  if (x4 - x3 == 0) {
    if (x2 - x1 == 0) {
      return false;
    } else {
      return true;
    }
  } else {
    if (x2 - x1 == 0) {
      return true;
    } else {
      if (m1 == m2) {
        return false;
      } else {
        return true;
      }
    }
  }
}
// group 5:
// question 9: --------------------------------------------------------
void windchill() {
  double chill = 0;

  for (int i = 5; i <= 60; i += 5) {
    for (int j = 40; j >= -45; j -= 5) {
      chill = (int)(36.74 + (0.6215 * j) - (35.75 * (pow(i, 0.16))) +
                    (0.4275 * j * (pow(i, 0.16))));

      cout << chill << "\t";
    }
    cout << endl;
  }
}
// question 10: --------------------------------------------------------
void add_to_list(vector<double>& v, int n) {
  for (int i = 1; i <= n; i++) v.push_back(i);
}
// group 6:
// question 11: --------------------------------------------------------
void print(std::vector <int> const &a) {
   std::cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}
 
int main() {
   std::vector<int> a = {2,4,3,5,6};
   print(a);
   return 0;
}
// question 12: --------------------------------------------------------
void add_to_list2(vector<double>& mylist, int n){
    for (int i = 1; i<=n; i++) {
     double n = i + 0.5;
     mylist.push_back(n);
    }
}
// group 7:
// question 13: --------------------------------------------------------
void make_change(double v) {
  double q = 0;
  double d = 0;
  double n = 0;
  double p = 0;
  double benj = 0;
  double andr = 0;
  double alex = 0;
  double abe = 0;
  double george = 0;
  double dol = 0;
  while (v > 100) {
    v = v - 100;
    benj++;
    cout << "$100 ";
  }
  while (v > 20) {
    v = v - 20;
    andr++;
    cout << "$20 ";
  }
  while (v > 10) {
    v = v - 10;
    alex++;
    cout << "$10 ";
  }
  while (v > 5) {
    v = v - 5;
    abe++;
    cout << "$5 ";
  }
  while (v > 1) {
    v = v - 1;
    george++;
    cout << "$1 ";
  }
  while ((v / 0.25) >= 1) {
    q++;
    v = v - .2499;
    cout << "$0.25 ";
  }
  while ((v / 0.10) >= 1) {
    d++;
    v = v - .0999;
    cout << "$0.10 ";
  }
  while ((v / 0.05) >= 1) {
    n++;
    v = v - .0499;
    cout << "$0.05 ";
  }
  while ((v / 0.01) >= 1) {
    p++;
    v = v - .0099;
    cout << "$0.01 ";
  }

}
// question 14: --------------------------------------------------------
void print_roman(int n)
{
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string romannum[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;   
    while(n>0)
    {
      int div = n/num[i];
      n = n%num[i];
      while(div--)
      {
        cout<<romannum[i];
      }
      i--;
    }
    cout << "\n";
}



// group 8:
// question 15: --------------------------------------------------------
// https://www.cplusplus.com/reference/fstream/ifstream/
// https://www.cplusplus.com/reference/string/stod/
// https://www.cplusplus.com/reference/string/string/substr/
// https://stackoverflow.com/questions/45387284/how-to-put-a-new-line-inside-a-string-in-c/
// https://www.cplusplus.com/reference/string/string/getline/
// https://www.sciencedirect.com/topics/computer-science/buffered-switch
// https://www.youtube.com/watch?v=lc8aTECbVuk

void read_points(string filename) {
  double x_o = 0, y_o = 0, z_o = 0;

  ifstream coordinates_file(filename);

  int num = 0;
  double x = 0, y = 0, z = 0, dis = 0, buffer = 0;
  string line, end;
  string::size_type s_a;
  string::size_type s_b;

  if (coordinates_file.is_open()) {
    while (getline(coordinates_file, line)) {
      // remember & fetches location
      x = stod(line, &s_a);
      y = stod(line.substr(s_a));
      // now switch to z
      end = line.substr(s_a);
      buffer = stod(end, &s_b);
      z = stod(end.substr(s_b));
      // solve
      dis = sqrt(((x - x_o) * (x - x_o)) + ((y - y_o) * (y - y_o)) +
                 ((z - z_o) * (z - z_o)));
      // read out
      cout << "Distance from x coordinate" << num
           << "Distance from y coordinate" << num
           << "Distance from z coordinate" << num << "Distance from (0,0,0)"
           << dis << '\n';
    }
    coordinates_file.close();
  }
}
// question 16: --------------------------------------------------------

// question 2: --------------------------------------------------------

void polar2rect(double r, double theta, double& x, double& y) {
  //	r = sqrt(x*x+y*y);

  x = r * cos(theta);
  y = r * sin(theta);

  return;
}

// your code should make main work.
// your team is not done until everyone succeeds in writing their function and
// putting it all together
int main() {
  // question 1: --------------------------------------------------------
	double a1[] = {10, 20, 30, 40};
	cout << "rms(a) = " << rms(a1, 4) << "\n";
// question 2: --------------------------------------------------------
	double x,y, r, theta;
	cout << "please enter r,theta: ";
	cin >> r >> theta;
	polar2rect(r, theta, x, y);
	cout << "x,y = " << x << ", " << y << "\n\n\n";
// question 3 & 4: --------------------------------------------------------
	double mean, var, min, max;
	double a[] = {10, 20, 30, 40};
	stats(a, 4, mean, var, min, max);
	cout << "mean=" << mean << " var=" << var << " min=" << min << " max=" << max << '\n';

	double median, range;
	stats2(a, 4, median, range);
	cout << "mean=" << mean << " median=" << median << " range=" << range << '\n';

	double b[] = {1, 20, 42, 61, 96};
	stats2(b, 5, median, range);
	cout << "mean=" << mean << " median=" << median << " range=" << range << "\n\n\n";
// question 5: --------------------------------------------------------
	cout << area(30, 40, 10) << "\n\n\n" ;
// question 6: --------------------------------------------------------
	cout << "circle1 contains: " << containsPoint(10, 5, 20,  29, 5) << '\n'; // should be true
	cout << "circle2 contains: " << containsPoint(10, 10, 20,  29, 29) << '\n'; // should be false
// question 7: --------------------------------------------------------
	cout << "rectangles intersect: " <<  intersects(10, 10, 100, 100, -20, 30, 30, 30) << "\n\n\n";
// question 8: --------------------------------------------------------	
	cout << "is two lines intersect: " << lines_intersect(0,0,10,10,0,9,5,1) << endl;
// question 9: --------------------------------------------------------	
	windchill();
// question 10 & 11 & 12: --------------------------------------------------------	
	vector<double> v;
	add_to_list(v, 9);
	print(v);

	add_to_list2(v, 6);
	print(v);
// question 13: --------------------------------------------------------	
	make_change(5.23); // prints $5   $.10  $.10  $.01 $.01 $.01
  	make_change(1.95); // prints $1 $0.25 $0.25 $0.25 $.10 $.10
// question 14: --------------------------------------------------------	
	print_roman(123);
	print_roman(348);
	print_roman(97);
	print_roman(949);
	print_roman(1776);
	print_roman(19);
// question 15: --------------------------------------------------------	
	read_points("points.dat");
// question 16: --------------------------------------------------------	
	read_robot("robot.dat");
//--------------------------------------------------------	end
	return 0;
}
