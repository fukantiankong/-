//
//  ZYJSpecialSubjectViewModel.h
//  TRProject
//
//  Created by Albert on 16/7/5.
//  Copyright © 2016年 Albert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TRBaseViewModel.h"
#import "ZYJSpcialSubjectModel.h"
@interface ZYJSpecialSubjectViewModel : TRBaseViewModel

@property (nonatomic, getter=isHasMore, readonly) BOOL hasMore;

@property (nonatomic) NSInteger page;

@property (nonatomic) NSMutableArray<SpecialSubjectDataModel*> *dataList;

@property (nonatomic) NSInteger rowNumber;

- (NSURL *)iconForRow:(NSInteger) row;

- (NSString *)titleForRow:(NSInteger) row;

- (NSURL *)URLForRow:(NSInteger) row;

@end
