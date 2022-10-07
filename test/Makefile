CFLAGS = /nologo

all: extans.exe cmp.exe libHnSRTree.dll

libHnSRTree.dll: ..\lib\libHnSRTree.dll
	copy ..\lib\libHnSRTree.dll .

clean:
	del *.obj
	del *.exe
	del libHnSRTree.dll
	del *.tmp
	del *.idx
	del *.log
