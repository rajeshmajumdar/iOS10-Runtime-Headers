/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedLayoutState : TSPObject <TPArchivedLayoutStateProtocol> {
    unsigned int  _bodyLength;
    unsigned int  _documentPageIndex;
    unsigned int  _lastPageCount;
    NSSet * _missingFonts;
    NSArray * _sectionHints;
    unsigned int  _sectionIndex;
    unsigned int  _sectionPageIndex;
}

- (void)captureLayoutStateWithProvider:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_reset;
- (void)readLayoutStateWithConsumer:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
