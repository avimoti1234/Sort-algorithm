void Swapi(int& dwa, int& dwda) {
	int ds = dwda;
	dwda = dwa;
	dwa = ds;

}

void Sort(vector<int>& ds) {
	for (size_t i = 0; i < ds.size(); i++)
	{
		for (size_t ii = 0; ii < ds.size(); ii++)
		{
			if (ds[i] < ds[ii]) {
				Swapi(ds[i], ds[ii]);
			}
		}
	}
	
}
