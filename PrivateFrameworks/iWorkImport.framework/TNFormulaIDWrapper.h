/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNFormulaIDWrapper : NSObject <NSCopying> {
    struct { 
        unsigned int formulaID : 24; 
        unsigned int reserved : 8; 
    }  mID;
}

@property (readonly) struct { unsigned int x1 : 24; unsigned int x2 : 8; } formulaID;

- (struct { unsigned int x1 : 24; unsigned int x2 : 8; })chartFormulaID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { unsigned int x1 : 24; unsigned int x2 : 8; })formulaID;
- (unsigned int)hash;
- (id)initWithTNChartFormulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTNFormulaIDWrapper:(id)arg1;

@end
