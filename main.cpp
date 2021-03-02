#include<iostream>
#include<vector>


int main() {
	int n = 5,k,m = 11;
	const char *vec[m] = {"adam", "bert", "charles", "david", "eugene", "frank", "george", "hank", "ivan", "jacob", "karl"}; // this is an example of names
	const char **parts[n]; // whoo, magic

	for (int i = 0; i<n;i++) {
		const char *part[m/n];
		for (k=0;k<(m-1);k++) {
			(&parts[i])[k]=&vec[i*n+k];
			std::cout << "adding " << vec[i*n+k] << std::endl;
		}
	}
	return -1;

	for (int v = 0; v<n;v++) {
		std::cout << v << ":" << &parts[v] << std::endl;
		if (parts[v] != NULL) {
			for (int t =0; t<n;t++) {
				std::cout << v << "-" << t << ":"<< (&parts[v])[t] << std::endl;
			}
		}
	}

	return -1;
}

