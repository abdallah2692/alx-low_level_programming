from _typeshed import SupportsRichComparison
from collections.abc import Callable, Generator, Iterable, Reversible

from networkx.classes.graph import Graph, _Node
from networkx.utils.backends import _dispatch

@_dispatch
def descendants(G: Graph[_Node], source: _Node) -> set[_Node]: ...
@_dispatch
def ancestors(G: Graph[_Node], source: _Node) -> set[_Node]: ...
@_dispatch
def is_directed_acyclic_graph(G: Graph[_Node]) -> bool: ...
@_dispatch
def topological_sort(G: Graph[_Node]) -> Generator[_Node, None, None]: ...
@_dispatch
def lexicographical_topological_sort(
    G: Graph[_Node], key: Callable[[_Node], SupportsRichComparison] | None = None
) -> Generator[_Node, None, None]: ...
@_dispatch
def all_topological_sorts(G: Graph[_Node]) -> Generator[list[_Node], None, None]: ...
@_dispatch
def is_aperiodic(G: Graph[_Node]) -> bool: ...
@_dispatch
def transitive_closure(G: Graph[_Node], reflexive: bool = False) -> Graph[_Node]: ...
@_dispatch
def transitive_reduction(G: Graph[_Node]) -> Graph[_Node]: ...
@_dispatch
def antichains(G: Graph[_Node], topo_order: Reversible[_Node] | None = None) -> Generator[list[_Node], None, None]: ...
@_dispatch
def dag_longest_path(
    G: Graph[_Node], weight: str = "weight", default_weight: int = 1, topo_order: Iterable[_Node] | None = None
) -> list[_Node]: ...
@_dispatch
def dag_longest_path_length(G: Graph[_Node], weight: str = "weight", default_weight: int = 1) -> int: ...
@_dispatch
def dag_to_branching(G: Graph[_Node]) -> Graph[_Node]: ...
