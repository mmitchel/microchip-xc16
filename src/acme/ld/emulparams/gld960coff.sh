SCRIPT_NAME=i960
OUTPUT_FORMAT=""
TEXT_START_ADDR=??
TARGET_PAGE_SIZE=??
ARCH=i960
TEMPLATE_NAME=gld960c
GLD_STYLE=1
COFF_CTORS='
	___CTOR_LIST__ = .;
	LONG((___CTOR_END__ - ___CTOR_LIST__) / 4 - 2)
	*(.ctors)
	LONG(0)
	___CTOR_END__ = .;
	___DTOR_LIST__ = .;
	LONG((___DTOR_END__ - ___DTOR_LIST__) / 4 - 2)
	*(.dtors)
	LONG(0)
	___DTOR_END__ = .;
'
