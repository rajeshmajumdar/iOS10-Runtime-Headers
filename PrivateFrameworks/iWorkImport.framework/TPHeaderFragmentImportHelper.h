/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderFragmentImportHelper : NSObject {
    id * _fragments;
    NSCharacterSet * _nonWhitespaceCharacterSet;
    TSPObjectContext * _objectsContext;
    TSPObjectContext * _storageContext;
    NSCharacterSet * _whitespaceCharacterSet;
}

- (unsigned int)countOfWhitespaceRunsInString:(id)arg1 ranges:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)dealloc;
- (id)initWithFragments:(id*)arg1 storageContext:(id)arg2 objectsContext:(id)arg3;
- (void)p_splitStorageInThree:(int)arg1 withRanges:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)p_splitStorageInTwo:(int)arg1 withRanges:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 firstTarget:(int)arg3 secondTarget:(int)arg4;
- (BOOL)p_storageIsEffectivelyEmpty:(id)arg1;
- (void)processFragmentsForSpaceFormatting;

@end
