
#include <Polygon.hpp>
#include <fstream>

using namespace std;
using namespace routeStat;

int main() {

	string	data;
	json j = "[\n"
			 "\t{\n"
			 "\t\t\"color\": \"#800080\",\n"
			 "\t\t\"coords\": [\n"
			 "\t\t\t[\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.45500753244466,\n"
			 "\t\t\t\t\t30.678076744079595\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.452760514960697,\n"
			 "\t\t\t\t\t30.674085617065427\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.4511343260615,\n"
			 "\t\t\t\t\t30.66760540008545\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.450868217800628,\n"
			 "\t\t\t\t\t30.66005229949951\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.452050911230397,\n"
			 "\t\t\t\t\t30.653486251831056\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.449478520203417,\n"
			 "\t\t\t\t\t30.648121833801267\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44581191381088,\n"
			 "\t\t\t\t\t30.63666343688965\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44468822696115,\n"
			 "\t\t\t\t\t30.633273124694825\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.444932187260217,\n"
			 "\t\t\t\t\t30.634657144546514\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44751957773615,\n"
			 "\t\t\t\t\t30.644034147262578\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.448258809585308,\n"
			 "\t\t\t\t\t30.64785361289978\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44635896349348,\n"
			 "\t\t\t\t\t30.646930932998655\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.444577335554978,\n"
			 "\t\t\t\t\t30.645343065261846\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44181976332534,\n"
			 "\t\t\t\t\t30.645428895950319\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.43864801302807,\n"
			 "\t\t\t\t\t30.646222829818727\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.43552783608941,\n"
			 "\t\t\t\t\t30.646544694900514\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.43073631611281,\n"
			 "\t\t\t\t\t30.64680218696594\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.42882106914789,\n"
			 "\t\t\t\t\t30.646609067916868\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.42788190801443,\n"
			 "\t\t\t\t\t30.645729303359987\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.425086513766597,\n"
			 "\t\t\t\t\t30.646147727966306\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.42462060078847,\n"
			 "\t\t\t\t\t30.647521018981935\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.42985634613468,\n"
			 "\t\t\t\t\t30.6507396697998\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.427608291097,\n"
			 "\t\t\t\t\t30.65382957458496\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.42852527211137,\n"
			 "\t\t\t\t\t30.658271312713624\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.430166925396289,\n"
			 "\t\t\t\t\t30.664021968841554\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.439187741149677,\n"
			 "\t\t\t\t\t30.665502548217775\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44180497703904,\n"
			 "\t\t\t\t\t30.67384958267212\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44006016708186,\n"
			 "\t\t\t\t\t30.675673484802247\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.43609717079953,\n"
			 "\t\t\t\t\t30.68150997161865\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.43837445015769,\n"
			 "\t\t\t\t\t30.683419704437257\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44504307794408,\n"
			 "\t\t\t\t\t30.683333873748784\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.44610761702421,\n"
			 "\t\t\t\t\t30.68365573883057\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.45032121340353,\n"
			 "\t\t\t\t\t30.682883262634279\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.451888292406689,\n"
			 "\t\t\t\t\t30.68150997161865\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.455332750978858,\n"
			 "\t\t\t\t\t30.681166648864744\n"
			 "\t\t\t\t],\n"
			 "\t\t\t\t[\n"
			 "\t\t\t\t\t46.45679621034783,\n"
			 "\t\t\t\t\t30.681638717651365\n"
			 "\t\t\t\t]\n"
			 "\t\t\t]\n"
			 "\t\t],\n"
			 "\t\t\"name\": \"003\"\n"
			 "\t}\n"
			 "]"_json;


	Polygon poly = Polygon(j);

	cout << "Min Latitude:  " << poly.getMinLat() << endl
		 << "Max Latitude:  " << poly.getMaxLat() << endl
		 << "Min Longitude: " << poly.getMinLong() << endl
		 << "Max Longitude: " << poly.getMaxLong() << endl;
	cout << endl << "Points:" << endl;
	for (Point p : poly.getPoints())
		cout << "  " << p << endl;

	return (0);
}