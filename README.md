#anno 
A desktop application that can be used to annotate images for semantic segmentation purposes. This fork is designed for labelling a dataset used for crop coverage classification at ETH Zurich. 

#Build Linux
1. Make sure to init the git submodules:
	
	git submodule update --init --recursive

2. Install the following qt libraries:

	build-essential, qt5-default, qt5-qmake, qttools-dev

3. The project builds using gcc version 5.4.0 and qt5

4. Build the project using:
	
	> QT_SELECT=qt5 qmake

	> make

#Build Windows
1. Download and install QT Creator 4.6.0

2. During installation select QT version 5.10.1:

	Install the corresponding MinGW compiler in the options
	
3. Open QT creator and open the anno.pro (project file) to open the project

4. Check that the project compiles using the 'Debug' and 'Build' options in the lower left.

These instructions are a good guide for the installation: https://www.ics.com/blog/getting-started-qt-and-qt-creator-windows

#Generate Windows EXE file
1. In QT Creator, in the bottom left change the build settings to 'Release' from 'Debug'

2. In the resulting output 'Release' folder, there will be an exe file created. This exe file is missing the required .dll files to run alone. 

3. To add the missing .dll files to the release folder, using the command line, navigate to the QT bin directory (C:\Qt\5.10.1\mingw53_32\bin)

4. Run 'windeployqt ..\path\to\release\folder\' in the command line. This command finds the corresponding .dll files for the exe and moves them to the exe. 

5. Test the exe file operation and manually move any missing .dll files based on the error messages. 

6. The final executable folder requires the exe, the .dll files, and the attached data folders that are automatically created. 

These instructions here should help with the build: https://stackoverflow.com/questions/25570752/how-to-make-exe-file-in-qt-creator


