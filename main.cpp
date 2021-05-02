#include<iostream>
#include<vector>
#include <cmath>


int main() {
	int n = 3,k,m = 11; // n is the amount of groups, m the amount of names
	const int ipp = 4;
	const char *vec[m] = {"adam", "bert", "charles", "david", "eugene", "frank", "george", "hank", "ivan", "jacob", "karl"}; // this is an example of names
	const char **map[n][ipp]; // whoo, magic

	// this creates n partitions in the order of the set
	for (int i = 0; i<n+1;i++) {
		const char **part[ipp];
		for (k=0;k<std::floor(m/n)&&i*n+k<m;k++) {
			std::cout << "k" << k << "i" << i << "\n";
			part[k] = &vec[i*n+k];
		}
		map[i]=part;
	}

	//
	// debugging the vector, because i don't trust my own code :D
	for (int v = 2; v<n;v++) {
		/* std::cout << parts[v] << "\n"; */
		for (int vv = 0; map[v][vv] != NULL; vv++) {
			std::cout << v << ":" << vv << " => " << map[v][vv] << "\n";
		}
	}

	return -1;
}

