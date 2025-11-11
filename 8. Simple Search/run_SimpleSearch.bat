@echo off
cls
echo Compiling SimpleSearch...
g++ SimpleSearch.cpp -o SimpleSearch.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause
	exit /b
)
echo Runing SimpleSearch...
SimpleSearch.exe
pause