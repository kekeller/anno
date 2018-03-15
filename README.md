# anno 
A desktop application that can be used to annotate images for semantic segmentation purposes. This fork is designed for labelling a dataset used for crop coverage classification at ETH Zurich. 

#Installation Linux
1. Make sure to init the git submodules:
	
	git submodule update --init --recursive

2. Install the following qt libraries:

	build-essential, qt5-default, qt5-qmake, qttools-dev

3. The project builds using gcc version 5.4.0 and qt5

4. Build the project using:
	
	> QT_SELECT=qt5 qmake

	> make
