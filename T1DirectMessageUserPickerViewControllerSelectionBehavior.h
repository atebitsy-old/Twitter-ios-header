//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface T1DirectMessageUserPickerViewControllerSelectionBehavior : NSObject
{
    // Error parsing type: , name: account
    // Error parsing type: , name: participantValidator
    // Error parsing type: , name: selectionValidator
    // Error parsing type: , name: selectionManager
    // Error parsing type: , name: viewController
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool canFinishSelection;
- (long long)cellStateForTarget:(id)arg1;
- (void)deselectUserAtIndex:(long long)arg1;
- (void)toggleSelection:(id)arg1 indexPath:(id)arg2;
@property(nonatomic, readonly) NSArray *selectedUsers;
- (id)initWithViewController:(id)arg1 participantValidator:(id)arg2 account:(id)arg3;

@end

