/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMItemsController : NSObject {
    unsigned int  _capacity;
    struct __CFArray { } * _items;
}

@property (nonatomic) unsigned int capacity;
@property (nonatomic, readonly) BOOL isMoreToLoad;

- (void)_handleItem:(id)arg1;
- (unsigned int)_indexOfItem:(id)arg1;
- (id)_initWithItems:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (id)_items;
- (void)_itemsDidChange:(id)arg1;
- (id)_lastFinishedMessage;
- (id)_lastIncomingFinishedMessage;
- (id)_lastIncomingFinishedMessageWithTextContent;
- (id)_lastIncomingMessage;
- (id)_lastMessage;
- (id)_member:(id)arg1;
- (void)_removeAllItems;
- (void)_removeItem:(id)arg1;
- (void)_replaceItems:(id)arg1;
- (void)_replaceStaleTypingMessage;
- (BOOL)_trimIfNeeded;
- (id)_typingMessage;
- (unsigned int)capacity;
- (void)dealloc;
- (id)init;
- (BOOL)isMoreToLoad;
- (void)setCapacity:(unsigned int)arg1;

@end
