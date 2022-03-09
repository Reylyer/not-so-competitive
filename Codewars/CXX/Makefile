file = lengan_full
ext = cxx


# 
a:
	cl /Wall /Fo..\..\obj\  /Fe..\..\bin\ src\$(file).$(ext)
	..\..\bin\$(file).exe

create_dir:
	@if not exist ..\..\bin mkdir ..\..\bin
	@if not exist ..\..\obj mkdir ..\..\obj

init: create_dir a