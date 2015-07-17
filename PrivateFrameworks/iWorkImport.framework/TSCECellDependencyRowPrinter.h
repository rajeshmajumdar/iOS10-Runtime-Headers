/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellDependencyRowPrinter : NSObject {
    NSString * _cellID;
    TSCEEdgeListPrinter * _dependentsList;
    unsigned int  _dirtyPrecedentCount;
    BOOL  _isFormula;
    BOOL  _isInCycle;
    TSCEEdgeListPrinter * _precedentsList;
}

@property (nonatomic, retain) NSString *cellID;
@property (nonatomic) unsigned int dirtyPrecedentCount;
@property (nonatomic) BOOL isFormula;
@property (nonatomic) BOOL isInCycle;

- (void)addDependentWithCellID:(id)arg1 forOwner:(id)arg2;
- (void)addPrecedentWithCellID:(id)arg1 forOwner:(id)arg2;
- (id)cellID;
- (void)dealloc;
- (unsigned int)dirtyPrecedentCount;
- (id)initWithCellID:(id)arg1 dirtyPrecedentCount:(unsigned int)arg2;
- (BOOL)isFormula;
- (BOOL)isInCycle;
- (void)setCellID:(id)arg1;
- (void)setDirtyPrecedentCount:(unsigned int)arg1;
- (void)setIsFormula:(BOOL)arg1;
- (void)setIsInCycle:(BOOL)arg1;
- (id)stringForDependencyRow;
- (int)tsce_numericCompare:(id)arg1;

@end
