////模拟实现memmove
//#include<stdio.h>
//// memmove
//void* memmove(void* dst, const void* src, size_t count)
//{
//    void* ret = dst;
//    ​
//        if (dst <= src || (char*)dst >= ((char*)src + count)) {
//            /*
//            * Non-Overlapping Buffers
//            * copy from lower addresses to higher addresses
//            */
//            while (count--) {
//                *(char*)dst = *(char*)src;
//                dst = (char*)dst + 1;
//                src = (char*)src + 1;
//            }
//        }
//        else {
//            /*
//            * Overlapping Buffers
//            * copy from higher addresses to lower addresses
//            */
//            dst = (char*)dst + count - 1;
//            src = (char*)src + count - 1;
//            ​
//                while (count--) {
//                    *(char*)dst = *(char*)src;
//                    dst = (char*)dst - 1;
//                    src = (char*)src - 1;
//                }
//        }
//    ​
//        return(ret);
//}
//int main()
//{
//	const char arr1[] = "guan kun ";
//	const char arr2[] = "songjiang";
//	char ret = my_memmove(arr1, arr2, 9);
//	printf("%s", ret);
//	
//
//
//
//	return 0;
//}
//void* memcpy(void* dst, const void* src, size_t count)
//{
//    void* ret = dst;
//    assert(dst);
//    assert(src);
//    /*
//     * copy from lower addresses to higher addresses
//     */
//    while (count--) {
//        *(char*)dst = *(char*)src;
//        dst = (char*)dst + 1;
//        src = (char*)src + 1;
//    }
//
//    return(ret);
//}