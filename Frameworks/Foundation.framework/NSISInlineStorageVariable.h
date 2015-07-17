/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {
    NSString * _name;
    BOOL  _shouldBeMinimized;
    int  _valueRestriction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (copy) NSString *name;
@property BOOL shouldBeMinimized;
@property (readonly) Class superclass;
@property int valueRestriction;

- (oneway void)dealloc;
- (id)markedConstraint;
- (id)name;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldBeMinimized:(BOOL)arg1;
- (void)setValueRestriction:(int)arg1;
- (BOOL)shouldBeMinimized;
- (int)valueRestriction;

@end
