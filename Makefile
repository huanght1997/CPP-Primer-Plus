SUBDIRS=ch02 ch03 ch04 ch05 ch06 ch07 ch08 ch09 ch10 ch11 ch12 ch13 ch14 ch15 ch16 ch17 ch18 Appendixes
define make_subdir
 @for subdir in $(SUBDIRS) ; do \
 ( cd $$subdir && make $1) \
 done;
endef
all:
	$(call make_subdir , all)
cleanobj:
	$(call make_subdir , cleanobj)
clean:
	$(call make_subdir , clean)
