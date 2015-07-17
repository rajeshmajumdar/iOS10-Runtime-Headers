/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyGroupItem : CNCardGroupItem {
    BOOL  _allowsEmail;
    BOOL  _allowsIMessage;
    BOOL  _allowsPhone;
    CNContact * _contact;
    <CNPropertyGroupItemDelegate> * _delegate;
    CNCardPropertyGroup * _group;
    CNLabeledValue * _labeledValue;
    CNLabeledValue * _originalLabeledValue;
}

@property (nonatomic) BOOL allowsEmail;
@property (nonatomic) BOOL allowsIMessage;
@property (nonatomic) BOOL allowsPhone;
@property (nonatomic, readonly) BOOL canRemove;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSURL *defaultActionURL;
@property (nonatomic) <CNPropertyGroupItemDelegate> *delegate;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *displayValue;
@property (nonatomic, readonly) NSString *editingStringValue;
@property (getter=isEmpty, nonatomic, readonly) BOOL empty;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic) CNCardPropertyGroup *group;
@property (nonatomic, retain) CNLabeledValue *labeledValue;
@property (nonatomic, readonly) BOOL modified;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, readonly) id normalizedValue;
@property (nonatomic, retain) CNLabeledValue *originalLabeledValue;
@property (nonatomic, readonly) NSString *placeholderString;
@property (nonatomic, readonly) NSString *property;
@property (getter=isReadonly, nonatomic, readonly) BOOL readonly;
@property (getter=isSuggested, nonatomic, readonly) BOOL suggested;
@property (nonatomic, readonly) NSArray *supportedLabels;

+ (id)emptyValueForLabel:(id)arg1;
+ (id)newPropertyGroupItemForProperty:(id)arg1;
+ (id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;

- (void).cxx_destruct;
- (void)_removeSuggestion;
- (BOOL)allowsEmail;
- (BOOL)allowsIMessage;
- (BOOL)allowsPhone;
- (id)bestLabel:(id)arg1;
- (id)bestValue:(id)arg1;
- (BOOL)canRemove;
- (void)confirmSuggestion;
- (id)contact;
- (id)contactProperty;
- (id)contactStore;
- (id)defaultActionURL;
- (id)delegate;
- (id)description;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (id)displayValue;
- (id)editingStringValue;
- (id)group;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3;
- (id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToItem:(id)arg1;
- (BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2;
- (BOOL)isFavorite;
- (BOOL)isFavoriteOfType:(int)arg1;
- (BOOL)isReadonly;
- (BOOL)isSuggested;
- (BOOL)isValidIdentifier:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (id)labeledValue;
- (void)mergeItem:(id)arg1;
- (BOOL)modified;
- (id)mutableContact;
- (id)normalizedValue;
- (id)originalLabeledValue;
- (id)placeholderString;
- (id)property;
- (void)rejectSuggestion;
- (void)saveChangesImmediately:(BOOL)arg1;
- (void)setAllowsEmail:(BOOL)arg1;
- (void)setAllowsIMessage:(BOOL)arg1;
- (void)setAllowsPhone:(BOOL)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setOriginalLabeledValue:(id)arg1;
- (id)supportedLabels;
- (void)updateLabeledValueWithLabel:(id)arg1;
- (void)updateLabeledValueWithValue:(id)arg1;
- (id)updateWithLabel:(id)arg1 value:(id)arg2;
- (id)valueForDisplayString:(id)arg1;

@end
