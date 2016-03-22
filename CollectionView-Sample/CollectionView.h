//
//  CollectionView.h
//  CollectionView-Sample
//
//  Created by Arai on 2016/02/24.
//  Copyright © 2016年 masato_arai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CollectionReusableView.h"
#import "CollectionViewCell.h"
#import "WEWeather.h"

@interface CollectionView : UICollectionView

@property (nonatomic, weak) UIViewController *vcDelegate;

@property (nonatomic, strong) NSMutableArray<CollectionReusableViewData *> *headersData;
@property (nonatomic, strong) NSMutableArray<NSMutableArray<CollectionViewCellData *> *> *cellsData;

@property (nonatomic, strong) NSMutableArray<WEWeather *> *weathers;

@end