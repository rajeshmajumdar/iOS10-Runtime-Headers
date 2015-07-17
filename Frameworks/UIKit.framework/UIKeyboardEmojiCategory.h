/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCategory : NSObject {
    int  _categoryType;
    NSString * _displaySymbol;
    NSArray * _emoji;
    int  _lastVisibleFirstEmojiIndex;
}

@property int categoryType;
@property (getter=displaySymbol, readonly) NSString *displaySymbol;
@property (retain) NSArray *emoji;
@property (nonatomic) int lastVisibleFirstEmojiIndex;
@property (getter=name, nonatomic, readonly) NSString *name;

+ (id)categories;
+ (id)categoryForType:(int)arg1;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)displayName:(int)arg1;
+ (id)emojiRecentsFromPreferences;
+ (BOOL)emojiString:(id)arg1 inGroup:(unsigned int*)arg2 withGroupCount:(int)arg3;
+ (id)flagEmojiCountryCodesCommon;
+ (id)flagEmojiCountryCodesReadyToUse;
+ (unsigned int)hasVariantsForEmoji:(id)arg1;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (id)localizedStringForKey:(id)arg1;
+ (int)numberOfCategories;
+ (id)stringToRegionalIndicatorString:(id)arg1;

- (int)categoryType;
- (void)dealloc;
- (id)displaySymbol;
- (id)emoji;
- (int)lastVisibleFirstEmojiIndex;
- (id)name;
- (void)releaseCategories;
- (void)setCategoryType:(int)arg1;
- (void)setEmoji:(id)arg1;
- (void)setLastVisibleFirstEmojiIndex:(int)arg1;

@end
